
### Should:

- Submit with VSC extension to LeetCode
- Commit to GitHub repo


### Extension settings (for automated filePath), settings.json (VSC extension):

```
{
"leetcode.filePath": {
  "default": {
    "folder": "${id}.{kebab-case-name}",
    "filename": "${id}.${kebab-case-name}.${ext}"
  }
}
}
```