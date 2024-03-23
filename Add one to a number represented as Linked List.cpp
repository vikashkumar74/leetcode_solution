// You're given a positive integer represented in the form of a singly linked-list of digits. The length of the number is 'n'.



// Add 1 to the number, i.e., increment the given number by one.



// The digits are stored such that the most significant digit is at the head of the linked list and the least significant digit is at the tail of the linked list.



// Example:
// Input: Initial Linked List: 1 -> 5 -> 2

// Output: Modified Linked List: 1 -> 5 -> 3

// Explanation: Initially the number is 152. After incrementing it by 1, the number becomes 153.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 3
// 1 5 2


// Sample Output 1:
// 1 5 3


// Explanation For Sample Input 1:
// Initially the number is 152. After incrementing it by 1, the number becomes 153.


// Sample Input 2:
// 2
// 9 9


// Sample Output 2:
// 1 0 0


// Explanation For Sample Input 2:
// Initially the number is 9. After incrementing it by 1, the number becomes 100. Please note that there were 2 nodes in the initial linked list, but there are three nodes in the sum linked list.


// Expected time complexity :
// The expected time complexity is O('n').


// Constraints:
// 1 <= 'n' <=  10^5
// 0 <= Node in linked list <= 9

// There are no leading zeroes in the number.

// Time Limit: 1 sec

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////solution//////////////////////////////////////////////////////////////////////////////////////

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
int addones(Node*temp){
    if(temp==NULL)
    return 1;
    int carry=addones(temp->next);
    temp->data+=carry;
    if(temp->data<10)
    return 0;
    temp->data=0;
    return 1;
}
Node *addOne(Node *head)
{
    int carry=addones(head);
    if(carry==1){
        Node*newNode=new Node(1);
        newNode->next=head;
        return newNode;
    }
    return head;
    // Write Your Code Here.
}
