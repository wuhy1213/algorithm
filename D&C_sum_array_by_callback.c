int sum(int *array, int index)
{
	int sumValue;
	if (0 == index){		//基线条件
		return 0;
	}else{					//缩小问题的规模使其符合基线条件
		sumValue = array[index - 1] + sum(array, index - 1);
		return sumValue;
	}
}


基线条件：                          用变量index来记录当前处理的数组中的元素，直到index=0（即数组中的元素都处理完）
如何缩小问题的规模以不断符合基线条件：  从列表的末尾往前推，每处理一个元素，index-1
