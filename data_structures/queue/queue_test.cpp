#include <iostream>
#include "queue.h"

using namespace std;
int main() 
{ 
  Queue<int> intQueue1(10), intQueue2(10);  // create two integer queues 
 
  intQueue1.enqueue(1); 
  intQueue1.enqueue(2); 
  intQueue1.enqueue(3); 
 
  intQueue2.enqueue(10); 
  intQueue2.enqueue(20); 
  intQueue2.enqueue(30); 
 
  cout << "Contents of integer queue intQueue1: "; 
  for(int i=0; i < 3; i++) 
    cout << intQueue1.dequeue() << " "; 
  cout << endl; 
 
  cout << "Contents of integer queue intQueue2: "; 
  for(int i=0; i < 3; i++) 
    cout << intQueue2.dequeue() << " "; 
  cout << endl; 
 
  Queue<double> doubleQueue1(10), doubleQueue(10);  // create two double queues
 
 
  doubleQueue1.enqueue(1.01); 
  doubleQueue1.enqueue(2.02); 
  doubleQueue1.enqueue(3.03); 
 
  doubleQueue.enqueue(10.01); 
  doubleQueue.enqueue(20.02); 
  doubleQueue.enqueue(30.03); 
 
  cout << "Contents of double queue doubleQueue1: "; 
  for(int i=0; i < 3; i++) 
    cout << doubleQueue1.dequeue() << " "; 
  cout << endl; 
 
  cout << "Contents of double queue doubleQueue: "; 
  for(int i=0; i < 3; i++) 
    cout << doubleQueue.dequeue() << " "; 
  cout << endl; 
 
  return 0; 
}
