#include <iostream>
#include<ctype.h>
using namespace std;

struct node
{
    int value;
    struct node * left;
    struct node * right;
};
struct node * root = NULL;
void inorder_traversal(struct node * root)
{
    if(root==NULL)
        return;
    inorder_traversal(root->left);
    cout<<root->value;
    inorder_traversal(root->right);
}

int main()
{
    int n,key;
    struct node * root;
    string tree;
    cin>>tree;
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(tree[i]=='{' && count==1)
        {
            if(isnum(tree[i]))
            {
                    root->value=tree[i];
            }

        }
        else if(tree[i]=='{' && count > 1 && count1==0)
        {
                struct node * new1= new node;
                node->value= tree[i];
                root->left=new1;

                struct node * new2= new node;
                node->value= tree[i+1];
                new1->left=new2;

                struct node * new3= new node;
                node->value= tree[i+2];
                new1->right=new3;

                count1++;

        }
         else if(tree[i]=='{' && count > 1 && count1 >0)
        {
                struct node * new4= new node;
                node->value= tree[i];
                root->right=new4;

                struct node * new5= new node;
                node->value= tree[i+1];
                new4->left=new5;

                struct node * new6= new node;
                node->value= tree[i+2];
                new4->right=new6;

        }

    }

    inorder_traversal(root);
}
