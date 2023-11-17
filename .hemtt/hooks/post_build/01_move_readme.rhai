let readme = "README.md";
HEMTT_VFS.join("docs")
    .join(readme)
    .move(HEMTT_VFS.join(readme));