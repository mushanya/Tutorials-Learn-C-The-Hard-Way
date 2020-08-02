#include <stdio.h>

	/** 
	 * argc: argument count, the number of command-line arguments
	 *       the program was invoked with.
	 * argv: argument vector, a pointer to am array of character 
	 *       strings that contain the arguments, one per string. 
	 *
	 * example: in 'echo hello world' 
	 *          argc = 3, because 1) is echo, 2) is hello  3) is world, OR:
	 *          argv[0] = echo, argv[1] = hello, argv[2] = world
	 *          (!) notice that argv[argc] is a NULL POINTER :)
	 */

	// so i totally forgot to specify the return value type smh!
	int main(int argc, char* argv[]) {
		int distance = 100;
		printf("You are %d miles away.\n", distance);

		// at some point I forgot this return statement
		return 0;
	}
