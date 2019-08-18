// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = ``

const ans = () => {
  dfs(1, 'zero', 0)
}

const dfs = (num, s, i) => {
  if (num > 4) {
    return
  }

  console.log(num, s, i)

  dfs(num + 1, 'U', i+1)
  dfs(num + 2, 'L', i+1)
}

ans()
