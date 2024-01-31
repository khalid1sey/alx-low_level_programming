        *0x19 - Stack and Queues
# 1.1 what is stack

a stack is a linear data structure that follows LIFO rule.in stack both insertion and deletion takes place from just one end, that is from the top.
        <img src="https://data-flair.training/blogs/wp-content/uploads/sites/2/2019/06/C-Stack-insertion-and-deletion.jpg">

* there is two ways to implement stack in c:
    * statically: array implementation of stacks allows the static memory allocation of its data elements. its important to note that in this method the stack acquires all the features of an array.

    * dynamically: linked list implementation of stacks follows the dynamic memory allocation of its data elements.its important to note that in this method, the stack inherits all the characteristics of linked list.

# 1.2 application of Stack

* Number reversal: A stack helps you reverse a number or a word entered as a sequence of digits or characters respectively.
* Undo operation: Implementation of a stack helps you perform the “undo” operation in text editors or word processors. Here, all the changes done in the text editor are stored in a stack.
* Infix to postfix conversion: Using stacks, you can perform the conversion of an infix expression to a postfix expression.
* Backtracking: Stacks are finding applications in puzzle or maze problem-solving.
* Depth-first search (DFS): Stacks allow you to perform a searching algorithm called the depth-first search.

# 2.1 what is queue:
* its also linear data structure that follows FIFO rule.insertion is done from the back and deletion is done from the front.
    <img src="https://data-flair.training/blogs/wp-content/uploads/sites/2/2019/06/C-Queue-insertion-and-deletion.jpg">

* there is two ways to implement queue in c:
    * statically: array implementation of queues allows the static memory allocation of its data elements. its important to note that in this method the queues acquires all the features of an array.

   * dynamically: linked list implementation of queue follows the dynamic memory allocation of its data elements.its important to note that in this method, the queue inherits all the characteristics of linked list.

# 2.2 application of queue
* Round robin algorithm: The concept of queues finds a striking application in the round robin algorithm done in MBA.
* CPU Scheduling:  In a queue, the data is not processed instantly, but processed according to the FIFO rule. Therefore, this feature of queues helps in the sharing of resources among multiple users at the same time.
* Input-Output Buffers:  It helps in the transmission of asynchronous data (A condition where the retrieval of multiple data takes place at the user end at different rates) by converting it into synchronous data.