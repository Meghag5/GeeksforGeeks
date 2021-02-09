//https://practice.geeksforgeeks.org/problems/87f12e5c728d69a5322634776b54c75897d14daa/1/?track=30-DOC-day-15&batchId=320

//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    // code here.
    unordered_map<int,int> m;
    Node *current = head, *temp;
    int count = 0;
    
    while(current){
        m[current->data]++;
        current = current->next;
    }
    
    for(current=head;current->next!=NULL;current=current->next){
        for(temp=current->next;temp!=NULL;temp=temp->next){
            int tem = x - (current->data + temp->data);
            if(m[tem]!=0 )
            count++;
            
            if(tem == current->data || tem == temp->data )
            count--;
        }
    }
    
    return count/3;
} 
