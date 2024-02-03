double MinNumber(int firstInt, int secondInt)
{
	return firstInt < secondInt ? (double)firstInt : (double)secondInt;
}
double MinNumber(int firstInt, int secondInt, int thirdInt)
{
	if (firstInt <= secondInt && firstInt <= secondInt)
		return (double)firstInt;
	else if (secondInt <= firstInt && secondInt <= thirdInt)
		return (double)secondInt;
	else
		return (double)thirdInt;
}
double MinNumber(float firstInt, float secondInt)
{
	if (firstInt <= secondInt)
		return (double)firstInt;
	else
		return (double)secondInt;
}
double MinNumber(float firstInt, float secondInt, float thirdInt)
{
	if (firstInt <= secondInt && firstInt <= secondInt)
		return (double)firstInt;
	else if (secondInt <= firstInt && secondInt <= thirdInt)
		return (double)secondInt;
	else
		return (double)thirdInt;
}
double MinNumber(double firstInt, double secondInt, double thirdInt)
{
	if (firstInt <= secondInt && firstInt <= secondInt)
		return (double)firstInt;
	else if (secondInt <= firstInt && secondInt <= thirdInt)
		return (double)secondInt;
	else
		return (double)thirdInt;
}

