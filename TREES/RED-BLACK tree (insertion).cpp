#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right,*parent;
    bool color;
};
int height(node *ptr)
{
    int lheight=height(ptr->left),rheight=height(ptr->right);

    return max(lheight,rheight)+1;
}

void printlevel(node *root,int level)
{
    if(root==NULL)
        return;

    if(level==1)
    {
        cout<<root->data<<'\t';
    }
    else
    {
        printlevel(root->left,level-1);
        printlevel(root->right,level-1);
    }
}
void levelorder(node * root)
{
    int H=height(root);
    for(int i=1;i<=H;i++)
    {
        printlevel(root,i);
    }
}
node *newnode(int key)
{
    node *ptr;
    ptr=new node;
    ptr->data=key;
    ptr->left=NULL;
    ptr->right=NULL;
    ptr->parent=NULL;
};

node *rotateLeft(Node *&root, Node *&pt)
{
    Node *pt_right = pt->right;

    pt->right = pt_right->left;

    if (pt->right != NULL)
        pt->right->parent = pt;

    pt_right->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_right;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_right;

    else
        pt->parent->right = pt_right;

    pt_right->left = pt;
    pt->parent = pt_right;
}

node *rotateRight(Node *&root, Node *&pt)
{
    Node *pt_left = pt->left;

    pt->left = pt_left->right;

    if (pt->left != NULL)
        pt->left->parent = pt;

    pt_left->parent = pt->parent;

    if (pt->parent == NULL)
        root = pt_left;

    else if (pt == pt->parent->left)
        pt->parent->left = pt_left;

    else
        pt->parent->right = pt_left;

    pt_left->right = pt;
    pt->parent = pt_left;
}

node *fixViolation(node *&root,node *&pt)
{
  node *parent_pt=NULL;
  node *grand_parent_pt=NULL;

  while((pt!=root) && (pt->color!=BLACK) && (pt->parent->color==RED))
  {
      if (parent_pt == grand_parent_pt->left)
        {

            Node *uncle_pt = grand_parent_pt->right;

            /* Case : 1
               The uncle of pt is also red
               Only Recoloring required */
            if (uncle_pt != NULL && uncle_pt->color == RED)
            {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            }

            else
            {
                /* Case : 2
                   pt is right child of its parent
                   Left-rotation required */
                if (pt == parent_pt->right)
                {
                    rotateLeft(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                /* Case : 3
                   pt is left child of its parent
                   Right-rotation required */
                rotateRight(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        }

        /* Case : B
           Parent of pt is right child of Grand-parent of pt */
        else
        {
            Node *uncle_pt = grand_parent_pt->left;

            /*  Case : 1
                The uncle of pt is also red
                Only Recoloring required */
            if ((uncle_pt != NULL) && (uncle_pt->color == RED))
            {
                grand_parent_pt->color = RED;
                parent_pt->color = BLACK;
                uncle_pt->color = BLACK;
                pt = grand_parent_pt;
            }
            else
            {
                /* Case : 2
                   pt is left child of its parent
                   Right-rotation required */
                if (pt == parent_pt->left)
                {
                    rotateRight(root, parent_pt);
                    pt = parent_pt;
                    parent_pt = pt->parent;
                }

                /* Case : 3
                   pt is right child of its parent
                   Left-rotation required */
                rotateLeft(root, grand_parent_pt);
                swap(parent_pt->color, grand_parent_pt->color);
                pt = parent_pt;
            }
        }
    }

    root->color = BLACK;
}


node *insert(node *head,node *ptr)
{
    if(head==NULL)
    {
        return ptr;
    }
    if(head->data>ptr->data)
        {
            head->right=insert(head->right,ptr->data);
            head->left->parent=head;
        }
    else if(head->data<ptr->data)
    {
        head->right=insert(head->right,ptr->data);
        head->right->parent=head;
    }
    return head;
}
int main()
{
    node *root=NULL;
    int ch,ele;
    char choi;
    do
    {
        cout<<"1.Insert a element";
        cout<<"\n2.Display elements";
        cout<<"\n3.Exit\n";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter number you want to insert->";
            cin>>ele;
            node *ptr=noewnode(ele);
            root=insert(root,ptr);

            // fix Red Black Tree violations
    fixViolation(root, ptr);
        }
        else if(ch==2)
        {
            levelorder(root);
        }
        else exit(0);

        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');

    return 0;
}
