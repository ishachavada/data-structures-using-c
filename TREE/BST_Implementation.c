#include <stdio.h>
#include <stdlib.h>

struct bst
{
    int data;
    struct bst *lc;
    struct bst *rc;
};
typedef struct bst BST;
BST *root;

BST *init()
{
    root = NULL;
    return root;
}

void Insert(int x)
{
    BST *temp, *p, *t;
    temp = (BST *)malloc(sizeof(BST));
    temp->data = x;
    temp->lc = NULL;
    temp->rc = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        p = root;
        while (p != NULL)
        {
            // if (x == -1)
            // {
            //     return;
            // }
            if (x < p->data)
            {
                t = p;
                p = p->lc;
            }
            else if (x > p->data)
            {
                t = p;
                p = p->rc;
            }
            else
            {
                printf("Data Duplication Found.");
                return;
            }
        }
        if (x < t->data)
            t->lc = temp;
        else
            t->rc = temp;
    }
}

void SearchBST(int x)
{
    if (root == NULL)
        printf("No node");
    else
    {
        BST *p;
        p = root;
        while (p != NULL)
        {
            if (x < p->data)
                p = p->lc;
            else if (x > p->data)
                p = p->rc;
            else
            {
                printf("Found");
                return;
            }
        }
        printf("Not Found");
    }
}

void levelOrderTraversal()
{
    BST *LQ[50];
    int f = -1, r = -1;
    if (root == NULL){
        printf("No Node.");
        return;
	}
    LQ[++r] = root;
    while (f <= r)
    {
        if (LQ[++f] != NULL)
        {
            printf("%d\t", LQ[f]->data);
            LQ[++r] = LQ[f]->lc;
            LQ[++r] = LQ[f]->rc;
        }
    }
}

void RPreOrderTraversal(BST *r)
{
    if (r != NULL)
    {
        printf("%d\t", r->data);
        RPreOrderTraversal(r->lc);
        RPreOrderTraversal(r->rc);
    }
    else // if r==NULL
    {
        printf("null\t");
        return;
    }
}

void RInOrderTraversal(BST *r)
{
    if (r != NULL)
    {

        RPreOrderTraversal(r->lc);
        printf("%d\t", r->data);
        RPreOrderTraversal(r->rc);
    }
    else
    {
        printf("null\t");
        return;
    }
}
void RPostOrderTraversal(BST *r)
{
    if (r != NULL)
    {
        RPostOrderTraversal(r->lc);
        RPostOrderTraversal(r->rc);
        printf("%d\t", r->data);
    }
    else
    {
        printf("null\t");
        return;
    }
}

void NRPreOrderTraversal(BST *r)
{
    BST *p, *STK[10];
    int top = -1;

    if (r == NULL)
    {
        printf("No node\t");
        return;
    }
    else
    {
        p = r;
        do
        {
            if (p != NULL)
            {
                printf("%d\t", p->data);
                STK[++top] = p;
                p = p->lc;
            }
            if (p == NULL)
            {
                p = STK[top--];
                p = p->rc;
            }
        } while (top != -1 || p != NULL);
    }
}

void NRInOrderTraversal(BST *r)
{
    BST *p, *STK[10];
    int top = -1;

    if (r == NULL)
    {
        printf("No node\t");
        return;
    }
    else
    {
        p = r;
        do
        {
            while (p != NULL)
            {
                STK[++top] = p;
                p = p->lc;
            }

            p = STK[top--];
            printf("%d\t", p->data);
            p = p->rc;
        } while (top != -1 || p != NULL);
    }
}

void NRPostOrderTraversal(BST *r)
{
    BST *p, *STK[10], *t, *l = NULL;
    int top = -1;

    if (r == NULL)
    {
        printf("No node\t");
        return;
    }
    p = r;
    while (top != -1 || p != NULL)
    {
        if (p != NULL)
        {
            STK[++top] = p;
            p = p->lc;
        }
        else
        {
            t = STK[top];
            if (t->rc != NULL && l != t->rc)
                p = t->rc;
            else
            {

                printf("%d\t", t->data);
                l = STK[top--];
            }
        }
    }
}

void BSTDeletion(int x, BST *r)
{
    BST *p, *t=NULL, *t1=NULL, *t2=NULL;
    if (r == NULL){
    	printf("No node");
    	return;
	}
        
    else
    {
        p = r;
        while (p != NULL && x != p->data)
        {
            t = p;
            if (x < p->data)
                p = p->lc;
            if (x > p->data)
                p = p->rc;
        }
        // leaf node
        if (p->rc == NULL && p->lc == NULL)
        {
            if (p->data < t->data)
                t->lc = NULL;
            else
                t->rc = NULL;
        }

        // only left child
        if (p->lc != NULL && p->rc == NULL)
        {
            if (p->data < t->data)
                t->lc = p->lc;
            if (p->data > t->data)
                t->rc = p->lc;
        }

        // only right child
        if (p->lc == NULL && p->rc != NULL)
        {
            if (p->data < t->data)
                t->lc = p->rc;
            if (p->data > t->data)
                t->rc = p->rc;
        }

        // root node
        if (p->lc != NULL && p->rc != NULL )
        {
            p->lc = t1;
            p->rc = t2;

            while (t1->rc != NULL)
                t1 = t1->rc;

            t1->rc = t2;

            if (t == r)
                r = t1;
            else
            {
                if (t->data < p->data)
                    p->lc = t->lc;
                else
                    p->rc = t->lc;
            }
        }
    }
    free(p);
}

void main()
{
    int n;
    do
    {
        printf("\n\n-----------------------------------------------------------------------------------\n");
        printf("-----BINARY SEARCH TREE-----\n\n1.Insertion\t2.Searching\t3.Level-order Traversal\n");
        printf("4.Recursive PreOrder Traversal\t5.Recursive InOrder Traversal\t6.Recursive PostOrder Traversal\n");
        printf("7.Non-Recursive PreOrder Traversal.\t8.Non-Recursive InOrder Traversal.\t9.Non-Recursive PostOrder Traversal.\n10.Deletion\n11.Exit\n\nChoose one: ");
        scanf("%d", &n);
        switch (n)
        {

        case 1:
        {
            int x;
            printf("Enter data: ");
            scanf("%d", &x);
            Insert(x);
        }
        break;
        case 2:
        {
            int x;
            printf("Enter data: ");
            scanf("%d", &x);
            SearchBST(x);
        }
        break;
        case 3:
            levelOrderTraversal();
            break;
        case 4:
            RPreOrderTraversal(root);
            break;
        case 5:
            RInOrderTraversal(root);
            break;
        case 6:
            RPostOrderTraversal(root);
            break;
        case 7:
            NRPreOrderTraversal(root);
            break;
        case 8:
            NRInOrderTraversal(root);
            break;
        case 9:
            NRPostOrderTraversal(root);
            break;
        case 10:
        {
            int x;
            printf("Enter the element you want too delete: ");
            scanf("%d", &x);
            BSTDeletion(x,root);
            printf("Updated BST:\n");
            levelOrderTraversal();
        }
        break;
        default:
            printf("Invalid option");
            break;
        }
    } while (n != 11);
}

