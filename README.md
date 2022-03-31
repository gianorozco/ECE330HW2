--Prior to implementing the code to perform the transpose of a matrix, there was already a memory leak with given code--
	This was fixed by altering the destroy function & adding an output matrix, implementing both into main

--The Makefiles created are not named as per convention and therefore require different syntax--

	for compiling the static version: 
		'make -f makefile1'

	for compiling the dynamic version:

		'make -f makefile2'

	after running the executable the following syntax is required to remove the objects (.o) from directory:

		'make -f makefile1 clean'

	same goes for using makefile 2

--You need to use the the make clean commands prior to compiling and executing the programs, if they've been altered (for datatype checking)--
	values may differ otherwise
Edit: The clean commands are no longer necessary as the makefiles have been updated (apparently there was a typo)
