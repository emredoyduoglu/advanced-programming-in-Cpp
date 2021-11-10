<b><h1>Functions</h1></b>
<p class="intro">A function is a block of code which only runs when it is called.</p>
<p class="intro">You can pass data, known as parameters, into a function.</p>
<p class="intro">Functions are used to perform certain actions, and they are 
important for reusing code: Define the code once, and use it many times.</p>

<hr>

<h2>Create a Function</h2>
<p>C++ provides some pre-defined 
functions, such as <code class="w3-codespan">main()</code>, which is used to 
execute code. But you can also 
create your own functions to perform certain actions. </p>
<p>To create (often referred to as <em>declare</em>) a function, specify the name of the function, followed by parentheses <strong>()</strong>:

<span class="javakeywordcolor" style="color:mediumblue">void</span> <em>myFunction</em>() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// code to be executed<br></span>}

<h4>Example Explained</h4>
<ul>
<li><code class="w3-codespan">myFunction()</code> is the name of the function</li>
<li><code class="w3-codespan">void</code> means that the function does not have a 
return value. You will learn more about return values later in the next chapter</li>
<li>inside the function (the body), add code that defines what the function should do</li>
</ul>
<h2>Call a Function</h2>
<p>Declared functions are not executed immediately. They are "saved for later 
use", and will be executed later, when they are called.</p>
<p>To call a function, write the function's name followed by two parentheses <code class="w3-codespan">()</code> 
and a semicolon <code class="w3-codespan">;</code></p>
<p>In the following example, <code class="w3-codespan">myFunction()</code> is used to print a text (the action), when it is called:</p>

// Create a function<br></span><span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; <span class="javastringcolor" style="color:brown">"I just got executed!"</span>;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <strong>myFunction();</strong> <span class="commentcolor" style="color:green">// call the function<br></span>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="commentcolor" style="color:green">// Outputs 
  "I just got executed!"<br></span>

<b>A function can be called multiple times:</b>

<span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; <span class="javastringcolor" style="color:brown">"I just got executed!\n"</span>;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <strong>myFunction();</strong><br>&nbsp; <strong>myFunction();</strong><br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <strong>myFunction();</strong><br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="commentcolor" style="color:green">// 
  I just got executed!<br></span><span class="commentcolor" style="color:green">// I just got executed!<br></span><span class="commentcolor" style="color:green">// I just got executed!<br></span>

<h2>Function Declaration and Definition</h2>
<p>A C++ function consist of two parts:</p>
<ul>
<li><strong>Declaration:</strong> the function's name, return type, and parameters (if any)</li>
<li><strong>Definition:</strong> the body of the function (code to be executed)</li>
</ul>

<span class="javakeywordcolor" style="color:mediumblue">void</span> <strong>myFunction()</strong> { <span class="commentcolor" style="color:green">// <strong>declaration</strong><br></span>&nbsp; <span class="commentcolor" style="color:green">// 
    the body of the function (<strong>definition</strong>)<br></span>}

<p><strong>Note:</strong> If a user-defined function, such as <code class="w3-codespan">myFunction()</code> is declared after the <code class="w3-codespan">main()</code> function, 
<strong>an error will occur</strong>:</p>

<span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  myFunction();<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; <span class="javastringcolor" style="color:brown">"I just got executed!"</span>;<br>}<br><br><span class="commentcolor" style="color:green">// Error<br></span>

<p>However, it is possible to separate the declaration and the definition of the function - for code optimization.</p>
<p>You will often see C++ programs that have function declaration above <code class="w3-codespan">main()</code>, 
and function definition below <code class="w3-codespan">main()</code>. This will make the code 
better organized and easier to read:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// <strong>Function declaration</strong><br></span><span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction();<br><br><span class="commentcolor" style="color:green">// The main method<br></span><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  myFunction();&nbsp; <span class="commentcolor" style="color:green">// <strong>call</strong> the function<br></span>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="commentcolor" style="color:green">// <strong>Function definition</strong><br></span><span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; <span class="javastringcolor" style="color:brown">"I just got executed!"</span>;<br>}<br><span class="javanumbercolor" style="color:red">
</span>  </span>

<hr>
<h2>Parameters and Arguments</h2>
<p>Information can be passed to functions as a parameter. Parameters act as 
variables inside the function.</p>
<p>Parameters are specified after the function name, inside the parentheses.
You can add as many parameters as you want, just separate them with a comma:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>    <span class="javakeywordcolor" style="color:mediumblue">void</span> <em>functionName</em>(<em>parameter1</em>, <em>parameter2</em>, <em>parameter3</em>) {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// code to be executed<br></span>}<br><span class="javanumbercolor" style="color:red">
</span>  </span>

<h2>Default Parameter Value</h2>
<p>You can also use a default parameter value, by using the equals sign (<code class="w3-codespan">=</code>).
</p>
<p>If we call the function without an argument, it uses the default value ("Norway"):</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction(<strong>string country = <span class="javastringcolor" style="color:brown">"Norway"</span></strong>) {<br>&nbsp; cout <span class="javanumbercolor" style="color:red">
</span>  &lt;&lt; country &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br>}<br><span class="javanumbercolor" style="color:red">
</span>  <br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; myFunction(<span class="javastringcolor" style="color:brown">"Sweden"</span>);<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  myFunction(<span class="javastringcolor" style="color:brown">"India"</span>);<br>&nbsp; <strong>myFunction();</strong><br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  myFunction(<span class="javastringcolor" style="color:brown">"USA"</span>);<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="commentcolor" style="color:green">// Sweden<br></span><span class="commentcolor" style="color:green">// 
  India<br></span><span class="commentcolor" style="color:green">// Norway<br></span><span class="commentcolor" style="color:green">// USA<br></span><span class="javanumbercolor" style="color:red">
</span>  </span>

<p>A parameter with a default value, is often known as an "<strong>optional parameter</strong>". From the example above, 
<code class="w3-codespan">country</code> is an optional parameter and <code class="w3-codespan">"Norway"</code> is the default value.</p>


<h2>Multiple Parameters</h2>
<p>Inside the function, you can add as many parameters as you want:</p>
<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">void</span> myFunction(<strong>string fname, <span class="javakeywordcolor" style="color:mediumblue">int</span> age</strong>) {<br>&nbsp; cout &lt;&lt; fname &lt;&lt; <span class="javastringcolor" style="color:brown">" Refsnes. 
  "</span> &lt;&lt; age &lt;&lt; <span class="javastringcolor" style="color:brown">" years old. \n"</span>;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; myFunction(<strong><span class="javastringcolor" style="color:brown">"Liam"</span>, 3</strong>);<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  myFunction(<strong><span class="javastringcolor" style="color:brown">"Jenny"</span>, 14</strong>);<br>&nbsp; myFunction(<strong><span class="javastringcolor" style="color:brown">"Anja"</span>, 30</strong>);<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br><span class="javanumbercolor" style="color:red">
</span>  }<br><br><span class="commentcolor" style="color:green">// Liam Refsnes. 3 years old.<br></span><span class="commentcolor" style="color:green">// Jenny Refsnes. 14 years old.<br></span><span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// Anja Refsnes. 30 years old.<br></span><span class="javanumbercolor" style="color:red">
</span>  </span>

<p>Note that when you are working with multiple parameters, the function call must 
have the same number of arguments as there are parameters, and the arguments must be passed in the same order.</p>

<h2>Return Values</h2>
<p>The <code class="w3-codespan">void</code> keyword, used in the previous examples, indicates that the 
function should not return a value. If you 
want the function to return a value, you can use a data type (such as <code class="w3-codespan">int</code>, 
<code class="w3-codespan">string</code>, etc.) instead of <code class="w3-codespan">void</code>, and use the <code class="w3-codespan">return</code> 
keyword inside the function:</p>
<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>    <strong><span class="javakeywordcolor" style="color:mediumblue">int</span></strong> myFunction(<span class="javakeywordcolor" style="color:mediumblue">int</span> x) {<br>&nbsp; <strong><span class="javakeywordcolor" style="color:mediumblue">return</span></strong> <span class="javanumbercolor" style="color:red">5</span> <span class="javanumbercolor" style="color:red">
</span>    + x;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; cout &lt;&lt; myFunction(<span class="javanumbercolor" style="color:red">3</span>);<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>    <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><br><span class="commentcolor" style="color:green">// Outputs 
  8 (5 + 3)<br></span><span class="javanumbercolor" style="color:red">
</span>  </span>

<h2>Pass By Reference</h2>
<p>In the examples from the previous page, we used normal variables when we passed parameters to 
a function. You can also pass a <a href="cpp_references.asp">reference</a> to 
the function. This can be useful when you need to change the value of the arguments:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>    <span class="javakeywordcolor" style="color:mediumblue">void</span> swapNums(<span class="javakeywordcolor" style="color:mediumblue">int</span> &amp;x, <span class="javakeywordcolor" style="color:mediumblue">int</span> &amp;y) {<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">int</span> z = x;<br>&nbsp; x = y;<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>    y = z;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>    <span class="javakeywordcolor" style="color:mediumblue">int</span> firstNum = <span class="javanumbercolor" style="color:red">10</span>;<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">int</span> secondNum = <span class="javanumbercolor" style="color:red">20</span>;<br><br>&nbsp; cout &lt;&lt; <span class="javanumbercolor" style="color:red">
</span>    <span class="javastringcolor" style="color:brown">"Before swap: "</span> &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br>&nbsp; cout &lt;&lt; firstNum &lt;&lt; secondNum &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br><span class="javanumbercolor" style="color:red">
</span>    <br>&nbsp; <span class="commentcolor" style="color:green">// Call the function, which will change the values of firstNum 
    and secondNum<br></span>&nbsp; swapNums(firstNum, secondNum);<br><br>&nbsp; cout &lt;&lt; <span class="javastringcolor" style="color:brown">"After swap: 
    "</span> &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br>&nbsp; cout &lt;&lt; firstNum &lt;&lt; secondNum &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br><br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>    <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><span class="javanumbercolor" style="color:red">
</span>  </span>

<h2>Function Overloading</h2>
<p>With<strong> function overloading</strong>, multiple functions can have the same name with different
parameters:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> myFunction(<span class="javakeywordcolor" style="color:mediumblue">int</span> x)<br><span class="javakeywordcolor" style="color:mediumblue">float</span> myFunction(<span class="javakeywordcolor" style="color:mediumblue">float</span> x)<br><span class="javakeywordcolor" style="color:mediumblue">double</span> <span class="javanumbercolor" style="color:red">
</span>  myFunction(<span class="javakeywordcolor" style="color:mediumblue">double</span> x, <span class="javakeywordcolor" style="color:mediumblue">double</span> y)<br><span class="javanumbercolor" style="color:red">
</span>  </span>

<p>Consider the following example, which have two functions that add numbers of different type:</p>
<p>Instead of defining two functions that should do the same thing, it is better to overload one. </p>
<p>In the example below, we overload the <code class="w3-codespan">plusFunc</code> function to work for both <code class="w3-codespan">int</code> 
and <code class="w3-codespan">double</code>:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> plusFunc(<span class="javakeywordcolor" style="color:mediumblue">int</span> x, <span class="javakeywordcolor" style="color:mediumblue">int</span> <span class="javanumbercolor" style="color:red">
</span>  y) {<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> x + y;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">double</span> plusFunc(<span class="javakeywordcolor" style="color:mediumblue">double</span> x, <span class="javakeywordcolor" style="color:mediumblue">double</span> y) {<br>&nbsp; <span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">return</span> x + y;<br>}<br><br><span class="javakeywordcolor" style="color:mediumblue">int</span> main() {<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">int</span> myNum1 = plusFunc(<span class="javanumbercolor" style="color:red">8</span>, <span class="javanumbercolor" style="color:red">
</span>  <span class="javanumbercolor" style="color:red">5</span>);<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">double</span> myNum2 = plusFunc(<span class="javanumbercolor" style="color:red">4.3</span>, <span class="javanumbercolor" style="color:red">6.26</span>);<br>&nbsp; cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Int: "</span> &lt;&lt; <span class="javanumbercolor" style="color:red">
</span>  myNum1 &lt;&lt; <span class="javastringcolor" style="color:brown">"\n"</span>;<br>&nbsp; cout &lt;&lt; <span class="javastringcolor" style="color:brown">"Double: "</span> &lt;&lt; myNum2;<br>&nbsp; <span class="javakeywordcolor" style="color:mediumblue">return</span> <span class="javanumbercolor" style="color:red">0</span>;<br>}<br><span class="javanumbercolor" style="color:red">
</span>  </span>


