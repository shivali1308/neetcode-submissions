class Solution {
    public String minWindow(String s, String t) {
        if (s.length() < t.length()) {
            return "";
        }

        int[] count = new int[128];

        // Store the required frequency of each character
        for (char c : t.toCharArray()) {
            count[c]++;
        }

        int left = 0;
        int right = 0;

        int required = t.length();
        int minLength = Integer.MAX_VALUE;
        int start = 0;

        while (right < s.length()) {
            char c = s.charAt(right);

            // If this character is still needed
            if (count[c] > 0) {
                required--;
            }

            count[c]--;
            right++;

            // Window contains all characters of t
            while (required == 0) {
                // Update minimum window
                if (right - left < minLength) {
                    minLength = right - left;
                    start = left;
                }

                char leftChar = s.charAt(left);
                count[leftChar]++;

                // Removing this character makes the window invalid
                if (count[leftChar] > 0) {
                    required++;
                }

                left++;
            }
        }

        return minLength == Integer.MAX_VALUE
                ? ""
                : s.substring(start, start + minLength);
    }
}