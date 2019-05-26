#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode * MakeBTreeNode() {
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode * bt) {
	return bt->data;
}

void setData(BTreeNode * bt, BTData data) {
	bt->data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt) {
	return bt->left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt){
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub) {
	if (main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub) {
	if (main->right != NULL)
		free(main->right);

	main->right = sub;
}

void PreorderTraverse(BTreeNode * bt) {
	if (bt == NULL) return;

	printf("%d", bt->data);
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}

void InorderTraverse(BTreeNode * bt) {
	if (bt == NULL) return;

	InorderTraverse(bt->left);
	printf("%d", bt->data);
	InorderTraverse(bt->right);
}

void PostorderTraverse(BTreeNode * bt) {
	if (bt == NULL) return;

	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	printf("%d", bt->data);
}

void DeleteTree(BTreeNode * bt)
{
	if (bt == NULL)
		return;

	DeleteTree(bt->left);
	DeleteTree(bt->right);

	printf("昏力等 飘府 单捞磐 : %d \n", bt->data);
	free(bt);
}
