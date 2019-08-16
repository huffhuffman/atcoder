// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `575`
const n = stdin.split('\n')[0]

const sft = [7, 5, 3]
let done = []

const ans = () => {
  const len = n.length

  const list = []

  const sftNumArr = looper(list, 3, [])

  console.log(sftNumArr)
}

const dfs = (graph, v) => {
  done[v] = true

  for (let i = 0; i < graph.length; i++) {
    const nextV = graph[i]

    if (done[nextV]) continue
    dfs(graph, nextV)
  }
}

ans()
