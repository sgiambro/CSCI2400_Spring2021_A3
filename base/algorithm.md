Goals:  create a race between 5 horses and display the winner

Input:  the program will recive the seed that the user wants to use
	the horse array will get the new positions from step()

Output: step() will send new positions to the horse array
	race will output the visual representation of the race so the user can see
	finish() will give a winner an if none are found it will give a set continue number
	the winner will be printed when one is found  

Steps:  add all of the #include that are needed
	create the prototypes of step(),race(),and finish()
	create an array of all the horses positions in the race

	step()
		-make a for loop of 5
		-in the loop use rand() and create a 50-50 chance of progressing
		-and one to the selected horse in the array if it wins 50-50  

	race()
		-make a for loop of 5 with another for loop of 5 in it
		-the second for loop will print a . untill it reaces the horses position then it will print its number 

	finish()
		-create a for loop of 5 with an if inside it
		-the if will test each horses position to see if it had crossed the finish line
		-if a horse did the number will be returned 
		-if not a set continue number will be returned

	main()
		-ask user for the seed they want to use
		-convert the seed to an int so it can be used
		-create a while loop that will run until a horse wins
		-print the winner of the race once one has finished
