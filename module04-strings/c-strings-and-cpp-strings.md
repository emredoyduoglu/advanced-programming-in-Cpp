<h1 align="center">C strings and C++ strings</h1>
<hr>

<h2><u>C strings (a.k.a. null-terminated strings)</u></h2>

<h3>Declaration</h3>

<p>A C string is usually declared as an array of <code>char</code>. However, an array of <code>char</code> is <strong>NOT</strong> by itself a C string. A valid C string requires the presence of a terminating "null character" (a character with ASCII value 0, usually represented by the character literal <code>'\0'</code>).</p>

<p>Since <code>char</code> is a built-in data type, no header file is required to create a C
string. The C library header file <code>&lt;cstring&gt;</code> contains a number of utility functions that operate on C strings.</p>

<p>Here are some examples of declaring C strings as arrays of <code>char</code>:</p>

<pre>
   char s1[20];             // Character array - can hold a C string, but is not yet a valid C string

   char s2[20] = { 'h', 'e', 'l', 'l', 'o', '\0' };     // Array initialization

   char s3[20] = "hello";                               // Shortcut array initialization

   char s4[20] = "";        // Empty or null C string of length 0, equal to ""
</pre>

<p>It is also possible to declare a C string as a pointer to a <code>char</code>:</p>

<pre>
   char* s3 = "hello";
</pre>

<p>This creates an unnamed character array just large enough to hold the string (including the null character) and places the address of the first element of the array in the <code>char</code> pointer <code>s3</code>. This is a somewhat advanced method of manipulating C strings that should probably be avoided by inexperienced programmers. If used improperly, it can easily result in corrupted program memory or runtime errors.</p>

<h3>Representation in Memory</h3>

<p>Here is another example of declaring a C string:</p>

<pre>
   char name[10] = "Karen";
</pre>

<p>The following diagram shows how the string <code>name</code> is represented in memory:</p>

<p>
   <table>
      <tr>
         <td>
            K
         </td>
         <td>
            a
         </td>
         <td>
            r
         </td>
         <td>
            e
         </td>
         <td>
            n
         </td>
         <td>
            \0
         </td>
         <td>
            
         </td>
      </tr>
   </table>
</p>

<p>The individual characters that make up the string are stored in the elements of the array. The string is terminated by a null character. Array elements after the null character are not part of the string, and their contents are irrelevant.</p>

<p>A "null string" is a string with a null character as its first character:</p>

<p><img src="../Images/nullcstring.gif" alt="Null C string"><br>

<p>The length of a null string is 0.</p>

<p>What about a C string declared as a <code>char</code> pointer?</p>

<pre>
   char* name = "Karen";
</pre>

<p>This declaration creates an unnamed character array just large enough to hold the string <code>"Karen"</code> (including room for the null character) and places the address of the first element of the array in the <code>char</code> pointer <code>name</code>:</p>

<p><img src="../Images/ptrstring.gif" alt="Pointer-based C string"></p>

<h3>Subscripting</h3>

<p>The subscript operator may be used to access the individual characters of a C++ string:</p>

<pre>
   cout << s3[1] << endl;         // Prints the character 'e', the second character in the string "Hello"
</pre>

<p>Since the name of a C string is converted to a pointer to a <code>char</code> when used in a value context, you can also use pointer notation to access the characters of the string:</p>

<pre>
   cout << *s3 << endl;           // Prints the character 'h', the character pointed to by s3

   cout << *(s3 + 4) << endl;     // Prints the character 'o', the fifth character in the string "Hello"
</pre>

<h3>String Length</h3>

<p>You can obtain the length of a C string using the C library function <code>strlen()</code>.
This function takes a character pointer that points to a C string as an argument. It returns an
<code>unsigned int</code>, the number of valid characters in the string (not including the null character).</p>

<p><em>Examples</em></p>

<pre>
   char s[20] = "Some text";

   cout << "String length is " << strlen(s) << endl;     // Length is 9

   // Loop through characters of string
   for (int i = 0; i < (int) strlen(s); i++)
      cout << s[i];
   cout << endl;
</pre> 

<h3>String Comparison</h3>

<p>Comparing C strings using the relational operators <code>==</code>, <code>!=</code>,
<code>&gt;</code>, <code>&lt;</code>, <code>&gt;=</code>, and <code>&lt;=</code> does not
work correctly, since the array names will be converted to pointers. For example, the expression</p>

<pre>
   if (s1 == s2)
      {
      ...
      }
</pre>

<p>actually compares the addresses of the first elements of the arrays <code>s1</code> and <code>s2</code>, not their contents. Since those addresses are different, the relational expression is always false.</p>

<p>To compare the contents of two C strings, you should use the C library function <code>strcmp()</code>. This function takes two pointers to C strings as arguments, either or both of which can be string literals. It returns an integer less than, equal to, or greater than zero if the first argument is found, respectively, to be less than, to match, or be greater than the second argument.</p>

<p>The <code>strcmp()</code> function can be used to implement various relational expressions:</p>

<pre>
   if (strcmp(s1, s2) < 0)      // If the C string s1 is less than the C string s2
      {
      ...
      }

   if (strcmp(s1, s2) == 0)     // If the C string s1 is equal to the C string s2
      {
      ...
      }

   if (strcmp(s1, s2) > 0)      // If the C string s1 is greater than the C string s2
      {
      ...
      }

   if (strcmp(s1, s2) <= 0)     // If the C string s1 is less than or equal to the C string s2
      {
      ...
      }

   if (strcmp(s1, s2) != 0)     // If the C string s1 is not equal to the C string s2
      {
      ...
      }

   if (strcmp(s1, s2) >= 0)     // If the C string s1 is greater than or equal to the C string s2
      {
      ...
      }
</pre>

<h3>Assignment</h3>

<p>A character array (including a C string) can <strong>not</strong> have a new value assigned to it after it is declared.</p>

<pre>
   char s1[20] = "This is a string";
   char s2[20];

   s1 = "Another string";     // error: invalid array assignment

   s2 = s1;                   // error: invalid array assignment
</pre>

<p>The C++ compiler interprets these assignment statements as attempts to change the <em>address</em> stored in the array name, not as attempts to change the <em>contents</em> of the array. The address stored in an array's name may not be changed, since this could result in loss of access to the array storage.</p>

<p>To change the contents of a character array, use the C library function <code>strcpy()</code>. This function takes two arguments: 1) a pointer to a destination array of characters that is large enough to hold the entire copied string (including the null character), and 2) a pointer to a valid C string or a string literal. The function returns a pointer to the destination array, although this return value is frequently ignored.</p>

<p><em>Examples</em></p>

<pre>
   char s1[20];
   char s2[20] = "Another new string";

   strcpy(s1, "");               // Contents of s1 changed to null string

   strcpy(s1, "new string");     // Contents of s1 changed to "new string"

   strcpy(s1, s2);               // Contents of s1 changed to "Another new string"
</pre>

<p>If the string specified by the second argument is larger than the character array specified by the first argument, the string will overflow the array, corrupting memory or causing a runtime error.</p>

<h3>Input and Output</h3>

<p>The stream extraction operator <code>&gt;&gt;</code> may be used to read data into a character array as a C string. If the data read contains more characters than the array can hold, the string will overflow the array.</p>

<p>The stream insertion operator <code>&lt;&lt;</code> may be used to print a C string or string literal.</p>

<h3>Concatenation</h3>

<p>The C library function <code>strcat()</code> can be used to concatenate C strings. This function takes two arguments: 1) a pointer to a destination character array that contains a valid C string, and 2) a pointer to a valid C string or string literal. The function returns a pointer to the destination array, although this return value is frequently ignored.</p>

<pre>
   char s1[20] = "Hello";
   char s2[20] = "friend";

   strcat(s1, ", my ");     // s1 now contains "Hello, my "

   strcat(s1, s2);          // s1 now contains "Hello, my friend"
</pre>

<p>The destination array must be large enough to hold the combined strings (including the null character). If it is not, the array will overflow.</p>

<h3>Passing and returning</h3>

<p>Regardless of how a C string is declared, when you pass the string to a function or return it from a function, the data type of the string can be specified as either <code>char[]</code> (array of <code>char</code>) or <code>char*</code> (pointer to <code>char</code>). In both cases, the string is passed or returned <em>by address</em>.</p>

<p>A string literal like <code>"hello"</code> is considered a constant C string, and typically has its data type specified as <code>const char*</code> (pointer to a <code>char</code> constant).</p>

<h2><u>C++ string objects</u></h2>

<h3>Declaration</h3>

<p>A C++ string is an object of the class <code>string</code>, which is defined in the header file <code>&lt;string&gt;</code> and which is in the standard namespace. The <code>string</code> class has several constructors that may be called (explicitly or implicitly) to create
a string object.</p>

<p><em>Examples</em></p>

<pre>
   string s1;               // Default constructor - creates an empty or null C++ string of length 0, equal to ""

   string s2("hello");      // Explicit constructor call to initialize new object with C string

   string s3 = "hello";     // Implicit constructor call to initialize new object with C string

   string s4(s2);           // Explicit constructor call to initialize new object with C++ string

   string s5 = s2;          // Implicit constructor call to initialize new object with C++ string
</pre>

<h3>Representation in Memory</h3>

<p>Here is another example of declaring a C++ string:</p>

<pre>
   string name = "Karen";
</pre>

<p><img src="../Images/cppstring.gif" alt="C++ string"><br>

<code>name</code> is a <code>string</code> object with several data members. The data member <code>p</code> is a pointer to (contains the address of) the first character in a dynamically-allocated array of characters. The data member <code>length</code>
contains the length of the string. The data member <code>capacity</code> contains the number of valid characters that may currently be stored in the array.</p>

<p>A "null string" is a string with a <code>length</code> of 0:</p>

<p><img src="../Images/nullcppstring.gif" alt="Null C string"><br>

<p>The length of a null string is 0.</p>

<h3>Subscripting</h3>

<p>The subscript operator may be used to access the individual characters of a C++ string:</p>

<pre>
   cout << s3[1] << endl;     // Prints the character 'e', the second character in the string "Hello"
</pre>

<p>The reason this works is a C++ feature called <em>operator overloading</em>. Using the subscript operator with a C++ <code>string</code> object actually calls a special member function named <code>operator[]</code> that has been defined as part of the <code>string</code> class. The subscript specified inside the brackets is passed as an argument to the member function, which then returns the character at that position in the string.</p>

<p>The name of a C++ <code>string</code> object is <strong>not</strong> a pointer and you can not use pointer notation with it or perform pointer arithmetic on it.</p>

<h3>String Length</h3>

<p>You can obtain the length of a C++ string using the <code>string</code> class methods <code>length()</code> or <code>size()</code>. Both of methods return an <code>unsigned int</code>, the number of valid characters in the string (not including the null character).</p>

<p><em>Examples</em></p>

<pre>
   string s = "Some text";

   cout << "String length is " << s.length() << endl;     // Length is 9

   // Loop through characters of string
   for (int i = 0; i < (int) s.size(); i++)
      cout << s[i];
   cout << endl;
</pre> 

<h3>String Comparison</h3>

<p>C++ strings may be compared using the relational operators <code>==</code>, <code>!=</code>,
<code>&gt;</code>, <code>&lt;</code>, <code>&gt;=</code>, and <code>&lt;=</code>. A C++ string
may be compared to either another C++ string or a valid C string, including a string literal.
All such relational expressions resolve to the Boolean values <code>true</code> or 
<code>false</code>.</p>

<p><em>Examples</em></p>

<pre>
   if (s1 > s2)         // Compare two C++ strings 
      {
      ...
      }

   if ("cat" == s2)     // Compare C string literal and C++ string
      {
      ...
      }

   if (s3 != cstr)      // Compare C++ string and array containing C string
      {
      ...
      }
</pre>

<p>Like subscripting, this works because of operator overloading.</p>

<h3>Assignment</h3>

<p>You can assign a C++ string, a C string, or a C string literal to a C++ string.</p>

<p><em>Examples</em></p>

<pre>
   string s1 = "original string";
   string s2 = "new string";
   char s3[20] = "another string";

   s1 = s2;                       // s1 changed to "new string"

   s1 = s3;                       // s1 changed to "another string"

   s1 = "yet another string";     // s1 changed to "yet another string"
</pre>

<p>Once again, this works because of operator overloading.</p>

<h3>Input and Output</h3>

<p>The stream extraction operator <code>&gt;&gt;</code> may be used to read data into a C++ string object.</p>

<p>The stream insertion operator <code>&lt;&lt;</code> may be used to print a C++ string object.</p>

<h3>Concatenation</h3>

<p>The operator <code>+</code> may be used to concatenate C++ strings. C++ strings, C strings, and string literals may all be concatenated together in any order. The result is a C++ string object that may be assigned to another C++ string object, passed to a function that takes a C++ string object as an argument, printed, etc.</p>

<pre>
   string s1 = "Hello";
   string s2 = " good ";
   char s3[10] = "friend";

   s1 = s1 + ", my " + s2 + s3;     // s1 now contains "Hello, my good friend"
</pre>

<h3>Passing and returning</h3>

<p>C++ string objects are passed and returned <em>by value</em> by default. This results in 
a copy of the string object being created.</p>

<p>To save memory (and a possible call to the copy constructor), a string object is frequently passed <em>by reference</em> instead.</p>

<h2>Converting one string type to the other</h2>

<p>Sometimes you have one type of string, but you want to use a function or method that requires the other type. In that case, it's useful to be able to convert one string type to the other.</p>

<p>You can easily create a C++ string object from a C string or string literal. Declare the string object and pass the C string or string literal as a constructor argument.</p>

<p>What if you have a C++ string object and need to convert it to a C string? The <code>string</code> class provides a method called <code>c_str()</code> that returns a pointer to a <code>char</code> constant, the first character of a C string equivalent to the contents of the C++ string. The C string returned by this method can not be modified, but it can be used, printed, copied, etc.</p>

<pre>
   char s1[20];
   string s2 = "My C++ string";

   strcpy(s1, s2.c_str());     // Copies the C string "My C++ string" into the array s1
</pre>

<h2>So which of these string types should I use?</h2>

<p>Use C++ strings whenever possible, since arrays are <a href="https://isocpp.org/wiki/faq/big-picture#defn-evil">evil</a>. Unfortunately, it's not always possible to avoid using C strings.</p>

<ul>
<li>Command line arguments are passed into <code>main()</code> as C strings</li>
<li>There are a number of useful C string library functions that have no equivalent in the C++ <code>string</code> class</li> 
<li>C++ strings can't be serialized in binary format without writing a bunch of extra code</li>
<li>etc.</li>
</ul>

<p>In short, a good C++ programmer needs to understand and be able to manipulate both types of strings.</p>
