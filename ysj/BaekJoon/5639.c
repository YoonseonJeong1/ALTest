#include<stdio.h>
#include<stdlib.h>


typedef int BTData;

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode *left;
	struct _bTreeNode *right;
} BTreeNode;

BTreeNode *MakeBTreeNode(void)
{
	BTreeNode *nd;
	nd = (BTreeNode *)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode *bt)
{
	return (bt->data);
}

void SetData(BTreeNode *bt, BTData data)
{
	bt->data = data;
}

BTreeNode *GetLeftSubTree(BTreeNode *bt)
{
	return (bt->left);
}

BTreeNode *GetRightSubTree(BTreeNode *bt)
{
	return (bt->right);
}

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if(main->left != NULL)
		free(main->left);

	main->left = sub;

}

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if(main->right != NULL)
		free(main->right);

	main->right = sub;
}

void DeleteTree(BTreeNode *bt)
{
	if(bt == NULL)
		return;
	DeleteTree(bt->left);
	DeleteTree(bt->right);
	free(bt);
}

typedef void VisitFuncPtr(BTData data);


void PreorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if(bt == NULL)
		return;
	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}

void InorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if(bt == NULL)
		return;
	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);

}
void PostorderTraverse(BTreeNode *bt, VisitFuncPtr action)
{
	if(bt == NULL)
		return;
	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}


int main(void)
{
	int node[10001];
	int i=0;
	
	while(scanf("%d", &node[i]) != EOF)
	{
		i++;
	}
	printf("hello\n");

	return 0;
}
