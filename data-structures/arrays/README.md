<h1>Array</h1>

<h2>Active Recall Questions</h2>
<ul>
    <li>How do you initialize an array?</li>
    <li>What happens to the rest of the array if you initialize a portion of an array?</li>
    <li>How do you pass arrays as parameters?</li>
</ul>

<h2>Solutions</h2>

```type variableName [size] = {1, 2, 3, 4, 5};```

```type variableName [size] = {10, 20, 30}; => {10, 20, 30, 0, 0}``` </br>
![Partial Array](https://github.com/andreidimaano/DataStructuresAlgorithms/blob/main/data-structures/arrays/assets/partialArray.png)

```void foo(int arg[], int length)``` </br>
```int array [40]```
```foo(array, 40)```
