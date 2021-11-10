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

