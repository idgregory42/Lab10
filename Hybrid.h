#if !defined (HYBRID_H)
#define HYBRID_H

#include "CSC2110/QueueLinked.h"
using CSC2110::QueueLinked;
#include "SortedListDoublyLinked.h"

template < class T >
class Hybrid
{

   private:
      QueueLinked<T>* q;
      SortedListDoublyLinked<T>* sldl;

   public:
      Hybrid(int (*comp_items) (T* item_1, T* item_2), int (*comp_keys) (String* key, T* item));
      ~Hybrid();

      bool isEmpty();
      void enqueue(T* item);
      T* dequeue();
      ListDoublyLinkedIterator<T>* iterator();

};

template < class T >
Hybrid<T>::Hybrid(int (*comp_items) (T* item_1, T* item_2), int (*comp_keys) (String* key, T* item))
{
   q = new QueueLinked<T>();
   sldl = new SortedListDoublyLinked<T>(comp_items, comp_keys);
}

template < class T >
Hybrid<T>::~Hybrid()
{
   delete q;
   delete sldl;
}

//DO THIS
//complete the implementation for the Hybrid ADT in two different ways
//as outlined in the Lab 10 description
//simply comment the first implementation out when working on the second implementation
//use the getKey method to dequeue/remove

<<<<<<< HEAD
template < class T >
=======
template <class T>
>>>>>>> 7018d218036daf22f0d103114d521836506773a3
bool Hybrid<T>::isEmpty()
{
	return q->isEmpty();
}
<<<<<<< HEAD

template < class T >
void Hybrid<T>::enqueue(T* item)
{
	
	sldl->add(item);
	q->enqueue(item);
}


template < class T >
T* Hybrid<T>::dequeue()
{
	//DoubleNode<T>* doubleNode = q->dequeue();
	T* item = q->dequeue();
	item = sldl->remove(item);
	return item;
=======
template <class T>
bool Hybrid<T>::enqueue(T* item)
{
	q-> 
	sldl-> 
>>>>>>> 7018d218036daf22f0d103114d521836506773a3
}

template < class T >
ListDoublyLinkedIterator<T>* Hybrid<T>::iterator()
{
	return sldl->iterator();
}

#endif
