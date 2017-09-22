#include "DLList.h"
#include "NodeDL.cpp"

template <typename T> class MyList {
public:
	NodeDL<T>* first;
	NodeDL<T>* last;
	NodeDL<T>* pointer;
	int length;

	DLList() {//Constructor por defecto
		first = NULL;
		last = NULL;
		pointer = NULL;
		length = 0;
	}

	DLList(T d) {//Constructos con un primer nodo
		NodeDL<T> node = new NodeDL<T>(d);
		//Apuntamos primero y ultimo al nuevo node
		first = &node;
		last = &node;
		//Los apuntadores siguiente y atras apuntan a nulo
		node.next = NULL;
		node.back = NULL;
		//Incrementamos el contador de elementos de la lista
		length++;
	}

	//Metodos
	//Esta vacia?
	bool isEmpty() {
		return length == 0;
	}

	//Insertar al inicio
	//Escenario: Lista vacia, Lista con elementos
	void insertFirst(T d) {
		NodeDL<T> node = new NodeDL<T>(d);
		if (isEmpty()) {
			*first = node;
			*last = node;
		}
		else {//Si la lista ya cuenta con elementos
			//El siguiente del nuevo node apunta al node que apunta first
			node.next* = first;
			//El node que apunta first en su apuntador back apunta al nuevo nodo
			first->back = node;
			//El apuntador first apunta al nuevo nodo
			*first = node;

		}
		length++;
	}

	void insertLast(T d) {
		//Instanciamos el nuevo nodo
		Node<T> node = new NodeDL<T>(d);
		if (isEmpty()) {
			*first = node;
			*last = node;
		}
		else {//Si la lista ya cuenta con elementos
			node.back* = last;
			last->next = node;
			*last = node;
		}
		length++;
	}

	void deletefirst() {
		if (!isEmpty()) {
			if (length = 1) {
				*first = NULL;
				*last = NULL;
			}
			else {
				*first = first->next;
				*first->back = NULL;
			}
		}
		length--;
	}

	void deletelast() {
		if (!isEmpty()) {
			if (length = 1) {
				*first = NULL;
				*last = NULL;
			}
			else {
				pointer = first;
				while (pointer->next != last) {
					pointer = pointer->next;
				}
				last = pointer;
				pointer = NULL;
				last->next = NULL;
			}
			length--;
		}
	}
	
	void deletenode(T d) {
		if (!isEmpty()) {
			if (first->data == data) {
				deleteFirst();
				length--;
			}
			if (last->data == data) {
				deleteLast();
				length--;
			}
			pointer = first;
			do {
				if (pointer->data == data) {
					pointer->prev->next = pointer->next;
					pointer->next->prev = pointer->prev;
					pointer = nullptr;
					length--;
				}
				else pointer = pointer->next;
			} while (pointer != nullptr);
	   }
}

	void showList() {
		pointer = first;
		for (int i = 0; i < length; i++) {
			pointer = pointer->next;
		}
	}

};
