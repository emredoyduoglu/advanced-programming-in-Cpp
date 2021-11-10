<h2>C++ Strings</h2>

<p>Strings are used for storing text.</p>
<p>A <code class="w3-codespan">string</code> variable contains a collection of characters surrounded by double quotes:</p>
<div class="w3-example">
<h3>Example</h3>
<p>Create a variable of type <code class="w3-codespan">string</code> and assign it a value:</p>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string greeting = <span class="javastringcolor" style="color:brown">"Hello"</span>; </span></div>
</div>
<p>To use strings, you must include an additional header file in the source 
code, the <code class="w3-codespan">&lt;string&gt;</code> library:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// Include the string library<br></span>#include &lt;string&gt;<br><br><span class="commentcolor" style="color:green">// Create a string variable<br></span>string greeting = <span class="javastringcolor" style="color:brown">"Hello"</span>; </span></div>

</div>

<hr>

<h2>String Concatenation</h2>

<p>The <code class="w3-codespan">+</code> operator can be used between strings to add them together to make a new 
string. This is called <strong>concatenation</strong>:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string firstName = <span class="javastringcolor" style="color:brown">"John "</span>;<br>string lastName = <span class="javastringcolor" style="color:brown">"Doe"</span>;<br>string fullName = <span class="javanumbercolor" style="color:red">
</span>  firstName + lastName;<br>cout &lt;&lt; fullName; </span></div>

</div>
<p>In the example above, we added a space after firstName to create a space 
between John and Doe on output. However, you could also add a space with quotes (<code class="w3-codespan">" "</code> or <code class="w3-codespan">' '</code>):</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string firstName = <span class="javastringcolor" style="color:brown">"John"</span>;<br>string lastName = <span class="javastringcolor" style="color:brown">"Doe"</span>;<br>string fullName = <span class="javanumbercolor" style="color:red">
</span>  firstName + <span class="javastringcolor" style="color:brown">" "</span> + lastName;<br>cout &lt;&lt; fullName; </span></div>

</div>
<hr>

<h2>Append</h2>
<p>A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the <code class="w3-codespan">append()</code> function:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string firstName = <span class="javastringcolor" style="color:brown">"John "</span>;<br>string lastName = <span class="javastringcolor" style="color:brown">"Doe"</span>;<br>string fullName = <span class="javanumbercolor" style="color:red">
</span>  firstName.<span class="javapropertycolor" style="color:black">append</span>(lastName);<br>cout &lt;&lt; fullName; </span></div>

</div>

<div class="w3-note w3-panel">
<p>It is up to you whether you want to use <code class="w3-codespan">+</code> or <code class="w3-codespan">append()</code>. The major difference between the two, is that the <code class="w3-codespan">append()</code> function is much faster. However, for testing and such, it might be easier to just use <code class="w3-codespan">+</code>.</p>
</div>

<hr>

<h2>Adding Numbers and Strings</h2>
<div class="w3-panel w3-warning">
<p>WARNING!</p>
 <p>C++ uses the <code class="w3-codespan">+</code> operator for both <strong>addition</strong> and 
 <strong>concatenation</strong>.</p>
 <p>Numbers are added. Strings are concatenated.</p>
</div>
<p>If you add two numbers, the result will be a number:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> x = <span class="javanumbercolor" style="color:red">10</span>;<br><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> y = <span class="javanumbercolor" style="color:red">20</span>;<br><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> z = x + y;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="commentcolor" style="color:green">// z will be 30 (an integer)
 </span></span></div>

</div>

<p>If you add two strings, the result will be a string concatenation:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string x = <span class="javastringcolor" style="color:brown">"10"</span>;<br><span class="javanumbercolor" style="color:red">
</span>  string y = <span class="javastringcolor" style="color:brown">"20"</span>;<br><span class="javanumbercolor" style="color:red">
</span>  string z = x + y;&nbsp;&nbsp; <span class="commentcolor" style="color:green">// z will be 1020 (a string)
 </span></span></div>

</div>

<p>If you try to add a number to a string, an error occurs:</p>
<div class="w3-example w3-pale-red">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh w3-border-red"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string x = <span class="javastringcolor" style="color:brown">"10"</span>;<br><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> y = <span class="javanumbercolor" style="color:red">20</span>;<br><span class="javanumbercolor" style="color:red">
</span>  string z = x + y; </span></div>
</div>

<hr>

<h2>String Length</h2>
<p>To get the length of a string, use the <code class="w3-codespan">length()</code> function:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string txt = <span class="javastringcolor" style="color:brown">"ABCDEFGHIJKLMNOPQRSTUVWXYZ"</span>;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"The length of the txt 
  string is: "</span> &lt;&lt; txt.<span class="javapropertycolor" style="color:black">length</span>(); </span></div>

</div>

<p><strong>Tip:</strong> You might see some C++ programs that use the <code class="w3-codespan">size()</code> function to get the length of a string. This is 
just an alias of <code class="w3-codespan">length()</code>. It is completely up to you if you want to use <code class="w3-codespan">length()</code> or <code class="w3-codespan">size()</code>:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string txt = <span class="javastringcolor" style="color:brown">"ABCDEFGHIJKLMNOPQRSTUVWXYZ"</span>;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"The length of the txt 
  string is: "</span> &lt;&lt; txt.<span class="javapropertycolor" style="color:black">size</span>(); </span></div>

</div>
<hr>

<h2>Access Strings</h2>
<p>You can access the characters in a string by referring to its index number 
inside square brackets <code class="w3-codespan">[]</code>.</p>
<p>This example prints the <strong>first character</strong> in 
<strong>myString</strong>:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string <span class="javanumbercolor" style="color:red">
</span>  myString = <span class="javastringcolor" style="color:brown">"Hello"</span>;<br>cout &lt;&lt; myString[<span class="javanumbercolor" style="color:red">0</span>];<br><span class="commentcolor" style="color:green">// Outputs H<br></span><span class="javanumbercolor" style="color:red">
</span>  </span></div>

</div>

<div class="w3-note w3-panel">
<p><strong>Note:</strong> String indexes start with 0: [0] is the first character. [1] is the second 
character, etc.</p>
</div>

<p>This example prints the <strong>second character</strong> in 
<strong>myString</strong>:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string <span class="javanumbercolor" style="color:red">
</span>  myString = <span class="javastringcolor" style="color:brown">"Hello"</span>;<br>cout &lt;&lt; myString[<span class="javanumbercolor" style="color:red">1</span>];<br><span class="commentcolor" style="color:green">// Outputs e<br></span><span class="javanumbercolor" style="color:red">
</span>  </span></div>

</div>

<hr>

<h2>Change String Characters</h2>
<p>To change the value of a specific character in a string, refer to the index 
number, and use single quotes:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string <span class="javanumbercolor" style="color:red">
</span>  myString = <span class="javastringcolor" style="color:brown">"Hello"</span>;<br>myString[<span class="javanumbercolor" style="color:red">0</span>] = <span class="javastringcolor" style="color:brown">'J'</span>;<br>cout &lt;&lt; myString;<br><span class="commentcolor" style="color:green">// 
  Outputs Jello instead of Hello<br></span><span class="javanumbercolor" style="color:red">
</span>  </span></div>

</div>

<hr>

<h2>User Input Strings</h2>

<p>It is possible to use the extraction operator <code class="w3-codespan">&gt;&gt;</code> on <code class="w3-codespan">cin</code> to display a string entered by a user:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string firstName;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Type your first name: "</span>; <br>cin &gt;&gt; <span class="javanumbercolor" style="color:red">
</span>  firstName; <span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// get user input from the keyboard<br></span>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Your name is: "</span> &lt;&lt; <span class="javanumbercolor" style="color:red">
</span>  firstName;<br><br><strong><span class="commentcolor" style="color:green">// Type your first name: John</span></strong><br></span><strong><span class="commentcolor" style="color:green">// Your name is: John</span></strong> </div>

</div>

<p>However, <code class="w3-codespan">cin</code> considers a space (whitespace, tabs, etc) as a terminating 
character, which means that it can only display a single word (even if you type 
many words):</p>
<div class="w3-example w3-pale-red">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh w3-border-red"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string fullName;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Type your full name: "</span>; <br>cin &gt;&gt; <span class="javanumbercolor" style="color:red">
</span>  fullName;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Your name is: "</span> &lt;&lt; <span class="javanumbercolor" style="color:red">
</span>  fullName;<br><br><strong><span class="commentcolor" style="color:green">// Type your full name: John Doe<br></span><span class="commentcolor" style="color:green">// Your name is: John</span></strong> </span></div>

</div>

<p>From the example above, you would expect the program to print "John Doe", but it only prints "John".<br><br> That's why, when working with strings, we often use the <code class="w3-codespan">getline()</code> 
function to read a line of text. It takes <code class="w3-codespan">cin</code> as the first parameter, and the string 
variable as second:</p>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string fullName;<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Type your full name: "</span>; <br><span class="javanumbercolor" style="color:red">
</span>  getline (cin, fullName);<br>cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Your name is: "</span> &lt;&lt; <span class="javanumbercolor" style="color:red">
</span>  fullName;<br><br><span class="commentcolor" style="color:green">// Type your full name: John Doe<br></span><span class="commentcolor" style="color:green">// Your name is: John Doe </span></span></div>

</div>
<hr>


<h2>Omitting Namespace</h2>
<p>You might see some C++ programs that runs without the standard namespace library. The <code class="w3-codespan">using namespace std</code> line can be omitted and replaced with the <code class="w3-codespan">std</code> keyword, 
followed by the <code class="w3-codespan">::</code> operator 
for <code class="w3-codespan">string</code> (and <code class="w3-codespan">cout</code>) objects:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  #include &lt;iostream&gt;<br>#include &lt;string&gt;<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp;<span class="javanumbercolor" style="color:red">
</span>  <strong>std::</strong>string greeting = <span class="javastringcolor" style="color:brown">"Hello"</span>;<br>&nbsp; <strong>std::</strong>cout <span class="javanumbercolor" style="color:red">
</span>  &lt;&lt; greeting;<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>} </span></div>

</div>
<div class="w3-note w3-panel">
<p>It is up to you if you want to include the standard namespace library or not.</p>
</div>
<hr>
