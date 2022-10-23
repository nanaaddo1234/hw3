#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
  
  if(head = NULL){
    return;
  }
    if(*head->val <= pivot){
        smaller = head;
        head = head->next;
        smaller->next = NULL;
        llpivot(head,smaller->next,larger,pivot);
      else{ 
        larger = head;
        head = head->next;
        larger->next = NULL;
        llpivot(head,smaller,larger->next,pivot);
      }
    }
}

Stack <T> :: Stack(){
  vector<T> stacky;
  vector<T> :: iterator it;
  it = stacky.begin();

}

size_t Stack <T> ::  size() const{
  size_t n = 0;
  n = this.size();
  return n;
  


}

bool Stack <T> :: empty() const{

  if(stacky.size() == 0){
    return true;
    else{
      return false;
    }
  }
}


void Stack <T> :: push(const T& item){

    std vector:: 


  }

  
}

void Stack <T> :: pop(){
  
}

T const & Stack <T> :: top() const{
  
  stacky.popfront()
  
}



