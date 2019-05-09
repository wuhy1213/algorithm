int sum(int *array, int index)
{
	int sumValue;
	if (0 == index){		//基线条件
		return 0;
	}else{                  //缩小问题的规模使其符合基线条件
		sumValue = array[index - 1] + sum(array, index - 1);
		return sumValue;
	}
}
