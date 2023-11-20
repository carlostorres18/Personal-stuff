#include<iostream>
using namespace std;

class treeNode{
    private:     
        int data;
        treeNode* left;
        treeNode* right;

        // create methods that 
    public:
        treeNode(int inData = 0){
            data = inData;
            left = nullptr;
            right = nullptr;
        }
        void insertTreeNode(treeNode* root, int num){
            if(root == nullptr){
                root->data = num;
                return;
            }
            if(root->left == nullptr && root->right == nullptr){
                if(num > root->data){
                    root->right->data = num;
                }
                else if(num < root->data){
                    root->left->data = num;
                }
                return;

            }
            

            if(num < root->data){
                insertTreeNode(root->left, num);
            }
            else{
                insertTreeNode(root->right, num);
            }

        }


        void printTree(treeNode* root){
            if(root == nullptr)
            {
                return;
            }
            

            printTree(root->left);
            cout<<root->data<<endl;

            printTree(root->right);
            
        }

        
};