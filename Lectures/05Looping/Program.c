const int QUANTITY = 5;

int main() 
{
	int count = 1;
	int total = 0;

	while (count <= QUANTITY)
	{
		total += count;
		count++;
	}

    return total;
}
