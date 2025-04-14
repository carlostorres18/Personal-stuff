//***********************************************************************************
// CSCI 3333.01	Spring 2025
// Instructor: Dr. Andres Figueroa
// Programming Assignment 2: Movies Dataset using BST
// Students Name and SID#: Carlos Torres 20631527
//
//***********************************************************************************

#include <string>
#include <vector>
#include <fstream>
using namespace std;


struct Node {
    // data fields
    string titleID;
    string movieTitle;
    string region;

    int height;		//the height of the subtree rooted by the node
    int leftHeight;	//the length of the longest path by the left child of the node
    int rightHeight;	//the length of the longest path by the right child of the node
    int level;		//the level of the node in the tree
    int balanceFactor;	//the balance factor of the subtree rooted by the node, defined as rightHeight-lefttHeight
    struct Node *left;  //the left child
    struct Node *right;	//the right child
};

class BinarySearchTree{
private:
	int numberNodes; // number of nodes in the tree
	Node* root; // root of the tree
	Node* newNode(string id, string title, string region, int level){
        Node* tempNode = new Node;
		tempNode->titleID = id;
		tempNode->movieTitle = title;
		tempNode->region = region;
		tempNode->height = 0;
		tempNode->leftHeight = 0;
		tempNode->rightHeight = 0;
		tempNode->level = level;
		tempNode->balanceFactor = 0;
		tempNode->left = NULL;
		tempNode->right= NULL;
		return tempNode;
	}
public:
	BinarySearchTree();
	void insert(string id, string title, string region, Node* currentNode); //inserts a movie record in the tree
    void inOrder(ofstream &out, Node* currentNode = NULL);    // inOrder traversal
    Node* search(string title, Node* currentNode); // returns a pointer to the node holding the searched movie title; otherwsie returns NULL
	int size();		// returns the numer of nodes in the tree 
	int height();		// returns the height of the tree
	int heightNode(string title);	// returns the height of the tree rooted by the node containing the movie's title title
	int balanceFactorNode(string title);	// returns the balance factor of the tree rooted by the node containing the movie's title title
	int balanceFactor();	// returns the balance factor of the root in the tree
	int leftHeight();	// returns the length of the longest path by the left child of the root
	int rightHeight();	// returns the length of the longest path by the right child of the root
};

BinarySearchTree::BinarySearchTree(){
	numberNodes = 0;
	root = NULL;
}

void BinarySearchTree::insert(string id, string title, string region, Node* currentNode = NULL){
    //The deafult parameter is empty, this means the funciton was called from main()
    //Set currentNode to the BST's root
	if(currentNode == NULL){
        	currentNode = (*this).root;
	}
	if(root == NULL){
		root = newNode(id, title, region, 0);
        numberNodes++;
		return;
	}
	else{
        //INSERT YOUR CODE HERE
        if(title< currentNode->movieTitle || (title == currentNode->movieTitle && id < currentNode->titleID) || (title == currentNode->movieTitle && id == currentNode->titleID && region < currentNode->region)){
            if(currentNode->left == NULL){
                currentNode->left = newNode(id, title, region, currentNode->level + 1);
                numberNodes++;
            }
            else{
                insert(id, title, region, currentNode->left);
            }
        }
        else if(title > currentNode->movieTitle || (title == currentNode->movieTitle && id > currentNode->titleID) || (title == currentNode->movieTitle && id == currentNode->titleID && region > currentNode->region)){
            if (currentNode->right == NULL) {
                currentNode->right = newNode(id, title, region, currentNode->level + 1);
                numberNodes++;
            }
            else {
                insert(id, title, region, currentNode->right);
            }
        }
	}
}


void BinarySearchTree::inOrder(ofstream &out, Node* currentNode){
    //The deafult parameter is empty, this means the funciton was called from main()
    //Set currentNode to the BST's root
    //static string str;
    if (currentNode == NULL){
        currentNode = (*this).root;
	}
    if(currentNode->left != NULL){
        	inOrder(out, currentNode->left);
    }
	out << currentNode->titleID << "\t" << currentNode->movieTitle << "\t" << currentNode->region <<endl;
    
    if(currentNode->right != NULL){
        	inOrder(out, currentNode->right);
    }
    return;
}


Node* BinarySearchTree::search(string title, Node* currentNode = NULL){
    //The deafult parameter is empty, this means the funciton was called from main()
    //Set currentNode to the BST's root
	if (currentNode == NULL){
        	currentNode = (*this).root;
	}
	if( title.compare(currentNode->movieTitle) ==  0){
        	return currentNode;
    	}
	else if( title.compare(currentNode->movieTitle) > 0){
	    if( currentNode->right != NULL)
            	return search(title,currentNode->right);
            else{
            	return NULL;
            }

    	}
    	else{
        	if( currentNode->left != NULL)
            		return search(title,currentNode->left);
        	else{
            		return NULL;
        	}
    	}
}


int BinarySearchTree::size()
{
	return numberNodes;
}

int BinarySearchTree::height()
{
	return root->height;
}

int BinarySearchTree::heightNode(string title)
{
	Node *tempNode = search(title);
	return tempNode->height;
}

int BinarySearchTree::leftHeight()
{
	return root->leftHeight;
}

int BinarySearchTree::rightHeight()
{
	return root->rightHeight;
}

int BinarySearchTree::balanceFactor()
{
	return root->balanceFactor;
}

int BinarySearchTree::balanceFactorNode(string title)
{
	Node *tempNode = search(title);
	return tempNode->balanceFactor;
}
