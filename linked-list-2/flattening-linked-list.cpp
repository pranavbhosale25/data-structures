/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;
    
    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }
    
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Optimal solution merges two lists recursively
   
   vector<int> nodes;
   Node *head = root;
   while(head){
       Node* top = head;
       while(head){
           nodes.push_back(head->data);
           head = head->bottom;
       }
       head = top->next;
   }
   
   sort(nodes.begin(),nodes.end());
   
   Node *result = new Node(0);
   Node *ans = result;
   int i = 0 ;
   while(i<nodes.size()){
       Node *temp = new Node(nodes[i]);
       result->bottom = temp;
       result = temp;
       i++;
   }
   
   return ans->bottom;
   
}