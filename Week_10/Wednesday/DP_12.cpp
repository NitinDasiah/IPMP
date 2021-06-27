int findMaxHeight(vector<Box>& boxes, int bottom_box_index, int index)
{
 
    if (index < 0)
        return 0;
 
    if (dp[index] != -1)
        return dp[index];
 
    int maximumHeight = 0;
 
    for (int i = index; i >= 0; i--) {

        if (bottom_box_index == -1|| (boxes[i].length< boxes[bottom_box_index].length&& boxes[i].width< boxes[bottom_box_index].width))
 
            maximumHeight= max(maximumHeight,findMaxHeight(boxes, i, i - 1)+ boxes[i].height);
    }
    return dp[index] = maximumHeight;
}