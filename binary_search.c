#define INVALID_INDEX 0xFFFFFFFF;
int binary_search(int *list, int listLen, int item)
{
    int middleIndex, guessValue;
    int low, high;

    low = 0;
    high = listLen - 1;
    
    while (low <= high)                     // Keep finding the last item in the list.
    {
        middleIndex = (low + high)/2;       // 向下取整
        guessValue = list[middleIndex];
        
        if (guessValue == item){            // Find the item.
            return middleIndex;
        }
        
        if (item < guessValue){
            high = middleIndex - 1;
        }else{
            low = middleIndex + 1;
        }
    }
    return INVALID_INDEX;
}
