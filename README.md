# Prioritized queue 🚶‍♂️🚶‍♀️🚶‍♂️🚶‍♀️🚶‍♂️

Written in C++, it works similarly to normal queue, but it picks the element not based on index, but on **priority**.

> [!IMPORTANT]
> Code is written in polish 🇵🇱

```
queue = [
  { content: "Content 1", priority: 0 }, 
  { content: "Content 2", priority: 1 }, 
  { content: "Content 3", priority: 4 }, 
  { content: "Content 4", priority: 2 }
]

task = queue.getHighestTask()

// Method is in polish ofc, but this would get us { content: "Content 3", priority: 4 }   
```
