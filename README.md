Monty Interpreter
Opcodes
push
	usage push<int>
	pushes an element to the stack
	parameter must be an integer
pall
	prints all values in the stack/queue starting from the top
pint
	prints the top of the stack/queue
pop
	removes the top element of the stack/queue
nop
	doesn't do anything
add
	adds the top two elements of the stack/queue
	result stored in the second element from the top and the top element it popped
sub
	subtracts the top element of the stack/queue from the second element from the top
	result stored in the second element from the top and the top element is popped
mul
	multiplies the top two elements of the stack/queue
	result is stored in the second element from the top and the top element is popped
div
	divides the second element from the top of the stack/queue by the top element
	result stored in the second element from the top and the top element popped
mod
	computes the modulus of the second element from the top of the stack/queue divided by
	the top element
	result is stored in the second element from the top and the top element popped
pchar
	prints the character value of the top element of the stack/queue
	integer at the top treated as an ASCII value
pstr
	prints the string contained in the stack/queue
	prints characters element by element until the stack/queue is empty, a value of 0 or an error
	occurs
rotl
	rotates the top element of the stack/queue to the bottom
rotr
	rotates the bottom element to the top
stack
	switches the queue to stack mode
queue	
	switched stack to queue mode
