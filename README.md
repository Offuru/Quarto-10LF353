# Quarto-10LF353

### How to contribute to the repository

#### Setup

1. Fork the repository from the Github page. This will create a personal copy of the repository.

2. Clone the fork locally

```bash
git clone <link-to-forked-repo>
cd <name-of-cloned-directory>
```

3. Add the original repo as an "upstream" remote. This will allow you to easily pull changes from the original repository

#### Contribute to the repository

1. Make changes to your code, then commit and push it:

```bash
git add .
git commit -m "<commit-message>"
```

2. If your version is behind the upstream one then fetch the new code first and rebase your commits on top of the upstream ones:

Fetch code from upstream to your forked repo (origin one, not your local one)
```bash
git fetch upstream
```

Rebase 
```bash
git rebase upstream/main
```

Push changes to your forked repository origin (rebasing changes the commit history and so we need to use the force flag)
```bash
git push origin main --force-with-lease
```

3. Open a pull request on Github to merge your changes into the original repository by clicking "Compare & pull request"
