#include <stdio.h>
#include <stdlib.h>


int* create_set(int n)
{
	int *set = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		set[i]=-1;
	}
	return set;
}

void union_function(int *set,int i, int j)
{
	if(set[i] <= set[j])
	{
		printf("uniting %d at set %d\n",j,i);
		set[j] = i;
		if(set[i]==set[j]) set[i]--;
	}else
	{
		printf("uniting %d at set %d\n",i,j);
		set[i] = j;
	}
}

int find_function(int *set, int i)
{
	int mother_node = set[i];
	if(set[i]< 0) return i;
	else
	{
		mother_node = find_function(set, set[i]);
		set[i] = mother_node;
		return mother_node;
	}
}
void imprime(int* set, int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if(set[i]>=0)
			printf(" %d c= %d",i,set[i]);
		else
			printf(" %d c= %d ",i,i);
	}
	printf("\n");
}

int main()
{
	int *set = create_set(7);
	int found,target;
	union_function(set,0,1);
	union_function(set,2,3);
	union_function(set,4,5);
	union_function(set,0,6);
	union_function(set,2,0);
	target = 6;
	found =  find_function(set,target);
	printf("found %d at %d\n",target,found);
	target = 1;
	found =  find_function(set,target);
	printf("found %d at %d\n",target,found);
	target = 4;
	found =  find_function(set,target);
	printf("found %d at %d\n",target,found);
}