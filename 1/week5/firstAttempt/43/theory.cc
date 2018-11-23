
----------------------------------------------------------------------------
  definition:         rewrite: 
----------------------------------------------------------------------------
  int x[8];         x[4]            

pointer notation:   *(x + 4);
       semantics:   x + 4 points to the location of the 4th int beyond x.
                    That element is reached using the dereference operator (*)

----------------------------------------------------------------------------
  int x[8];         x[3] = x[2];

pointer notation:   *(x + 3) = *(x + 2);
       semantics:   x + 3 and x + 2 are the locations of the third and second
                    int beyond x. The elements are reaches using the 
                    dereference operator(*). Then the element of the second
                    location beyond x is assigned to the third element beyond
                    x.
----------------------------------------------------------------------------
  char *argv[8];    cout << argv[2];

pointer notation:   cout << *(argv + 2);
       semantics:   argv + 2 points to the location of the 2 element beyond
                    argv. That element is reached using the dereference 
                    operator (*). That ellement is then inserted in cout.
----------------------------------------------------------------------------
  int x[8];         &x[10] - &x[3];
 
pointer notation:   (x + 10) - (x + 3);
       semantics:   x + 10 and x + 3 are the locations of the tenth and third
                    elements beyond x. The last is substracted from the
                    third to get the number of elements that is between the
                    two locations.
----------------------------------------------------------------------------
  char *argv[8];    argv[0]++;

pointer notation:   (*argv)++;
       semantics:   argv is a location of the zeroeth argument of argv. The 
                    element is reached using the dereference operator(*). 
                    That element is the location of the first element of an 
                    array of characters. Then the operator ++ increments
                    the location of the first character to that of the second
                    because the element is not dereferenced. Effectively, 
                    this means that the first character falls off of the 
                    string at (*argv).
----------------------------------------------------------------------------
  char *argv[8];    argv++[0];

pointer notation:   *(argv++);
       semantics:   Here the location argv is incremented. argv is now 
                    the location of its second element. However, because
                    the postfix ++ is used, the whole expression still is the
                    first element of argv. Only after the evaluation of the 
                    expression, the location will be incremented.
----------------------------------------------------------------------------
  char *argv[8];      ++argv[0];

pointer notation:     ++(*argv);
       semantics:     Here argv is the location pointing to the location of 
                      a character. The first location is dereferenced by the
                      dereference operator(*). Then the location to the 
                      character is incremented. Now the first charcter of 
                      the character sequences at position 0 of argv has 
                      fallen of.
----------------------------------------------------------------------------
  char **argv;        ++argv[0][2];

pointer notation:     ++(*((*argv) + 2));
       semantics:     here argv is a location that is dereferenced. Then 
                      another location to a char is retrieved. The element 2
                      positions beyond that is dereferenced by the 
                      dereference operator. This char is incremented (by using
                      the values of the ascii table).

----------------------------------------------------------------------------