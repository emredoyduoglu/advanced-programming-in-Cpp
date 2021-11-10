<h2>Arrays</h2>
<p>Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each 
value.</p>
<p>To declare an array, define the variable type, specify the name 
of the array followed by <strong>square brackets</strong> 
and specify the number of elements it should store:</p>

<p>string cars[4];</p>

<p>We have now declared a variable that holds an array of four strings. To insert 
values to it, we can use an array literal - place the values in a 
comma-separated list, inside curly braces:</p>

<span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string cars[<span class="javanumbercolor" style="color:red">4</span>] = {<span class="javastringcolor" style="color:brown">"Volvo"</span>, <span class="javastringcolor" style="color:brown">"BMW"</span>, <span class="javastringcolor" style="color:brown">"Ford"</span>, <span class="javastringcolor" style="color:brown">"Mazda"</span>};<br><span class="javanumbercolor" style="color:red">
</span>  </span>

<p>To create an array of three integers, you could write:</p>
<div class="w3-example">
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  <span class="javakeywordcolor" style="color:mediumblue">int</span> myNum[<span class="javanumbercolor" style="color:red">3</span>] = {<span class="javanumbercolor" style="color:red">10</span>, <span class="javanumbercolor" style="color:red">20</span>, <span class="javanumbercolor" style="color:red">30</span>};<br><span class="javanumbercolor" style="color:red">
</span>  </span></div>
</div>

<hr>

<h2>Access the Elements of an Array</h2>
<p>You access an array element by referring to the index number.</p>
<p>This statement accesses the value of the <strong>first element</strong> in 
<strong>cars</strong>:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string cars[<span class="javanumbercolor" style="color:red">4</span>] = {<span class="javastringcolor" style="color:brown">"Volvo"</span>, <span class="javastringcolor" style="color:brown">"BMW"</span>, <span class="javastringcolor" style="color:brown">"Ford"</span>, <span class="javastringcolor" style="color:brown">"Mazda"</span>};<br><span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; cars[<span class="javanumbercolor" style="color:red">0</span>];<br><span class="commentcolor" style="color:green">// Outputs Volvo<br></span><span class="javanumbercolor" style="color:red">
</span>  </span></div>
</div>

<p><strong>Note:</strong> Array indexes start with 0: [0] is the first element. [1] is the second 
element, etc.</p>

<hr>
<h2>Change an Array Element</h2>

<p>To change the value of a specific element, refer to the index number:</p>

<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  cars[<span class="javanumbercolor" style="color:red">0</span>] = <span class="javastringcolor" style="color:brown">"Opel"</span>;<br><span class="javanumbercolor" style="color:red">
</span>  </span></div>
</div>
<div class="w3-example">
<h3>Example</h3>
<div class="w3-code notranslate javaHigh"><span class="javacolor" style="color:black"><span class="javanumbercolor" style="color:red">
</span>  string cars[<span class="javanumbercolor" style="color:red">4</span>] = {<span class="javastringcolor" style="color:brown">"Volvo"</span>, <span class="javastringcolor" style="color:brown">"BMW"</span>, <span class="javastringcolor" style="color:brown">"Ford"</span>, <span class="javastringcolor" style="color:brown">"Mazda"</span>};<br>cars[<span class="javanumbercolor" style="color:red">0</span>] = <span class="javastringcolor" style="color:brown">"Opel"</span>;<br><span class="javanumbercolor" style="color:red">
</span>  cout &lt;&lt; cars[<span class="javanumbercolor" style="color:red">0</span>];<br><span class="javanumbercolor" style="color:red">
</span>  <span class="commentcolor" style="color:green">// Now outputs Opel instead of Volvo<br></span><span class="javanumbercolor" style="color:red">
</span>  </span></div>

</div>
<hr>
