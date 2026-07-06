#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct CharNode

{

    char data = 0;  /// Nice to have a default value 0
    CharNode * link[3] = {nullptr}; // Always initialized to nullptr

};

int main()

{

    //IntNode node1 = *(new IntNode);
    CharNode nodeL;
    nodeL.data = 'L';
    
    //IntNode node2 = *(new IntNode);
    CharNode nodeI;
    nodeI.data = 'I';

    //IntNode node3 = *(new IntNode);
    CharNode nodeV;
    nodeV.data = 'V';
    
    //IntNode node4 = *(new IntNode);
    CharNode nodeE;
    nodeE.data = 'E';

    /// Connect the two nodes

    nodeL.link[0] = &nodeI;
    nodeL.link[1] = &nodeV;
    nodeL.link[2] = &nodeE;
    
    nodeI.link[0] = &nodeL;
    nodeI.link[1] = &nodeV;
    nodeI.link[2] = &nodeE;
    
    nodeV.link[0] = &nodeL;
    nodeV.link[1] = &nodeI;
    nodeV.link[2] = &nodeE;
    
    nodeE.link[0] = &nodeL;
    nodeE.link[1] = &nodeI;
    nodeE.link[2] = &nodeV;

    /// Test if they are connected
    
    srand(time(0));
    
    CharNode * p = &nodeL; /// Let pointer points to node1

    for (int i = 0; i < 10; ++i)  /// Loop until the end of the list

    {

        cout << p->data << "  ";  /// Display the data
        
        int randomIndex = rand() % 3; // To get the random number
        
        p = p->link[randomIndex];      /// Move to next node

    }

    cout << endl;

    return 0;

}
