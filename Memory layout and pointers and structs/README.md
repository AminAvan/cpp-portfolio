
## refering
- A regular object: `.` .
- A pointer/iterator: `->`.

```cpp
pair<int,int> p = {1, 100};
p.first;    // direct object; use dot

pair<int,int>* ptr = &p;
ptr->first; // pointer/iterator; use arrow
```