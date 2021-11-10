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
