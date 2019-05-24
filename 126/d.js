// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3
1 2 2
2 3 1`

const n = Number(stdin.split('\n')[0])

const [, ..._uvw] = stdin.trim().split('\n')
const uvw = _uvw.map(e => e.split(' ').map(Number))

const getNodes = _ => {
  let nodes = Array(n)
  for (let i = 0; i < n - 1; i++) {
    const [u, v, w] = uvw[i]

    if (w % 2 === 0) {
      nodes[u - 1] = 0
      nodes[v - 1] = 0
    } else {
      nodes[u - 1] = 1
      nodes[v - 1] = 1
    }
  }

  // console.log(nodes)
}

getNodes()

