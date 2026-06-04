class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size() - 1, container = 0, i = 0;
        while (i < j) {
            container = max(container, min(height[i], height[j]) * (j - i));
            if (height[i] > height[j]) {
                j--;
            } else {
                i++;
            }
        }
        return container;
    }
};