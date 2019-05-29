// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `10
yakutsk 10
yakutsk 20
yakutsk 30
yakutsk 40
yakutsk 50
yakutsk 60
yakutsk 70
yakutsk 80
yakutsk 90
yakutsk 100`

const n = Number(stdin.split('\n')[0])

const [, ..._sp] = stdin.trim().split('\n')
const sp = _sp.map(e => e.split(' '))

const ans = _ => {
  for (let i = 0; i < sp.length; i++) {
    sp[i][1] = Number(sp[i][1])
    sp[i].push(i + 1)
  }

  // sp.sort((a, b) => b[1] - a[1])

  sp.sort((a, b) => {
    const nameA = a[0]
    const nameB = b[0]
    if (nameA < nameB) {
      return -1
    }
    if (nameA > nameB) {
      return 1
    }
    return 0
  })

  let tmp = []
  for (let i = 0; i < sp.length; i++) {
    const [name, score, id] = sp[i]
    const nextName = i < sp.length - 1 ? sp[i + 1][0] : 0

    if (name === nextName) {
      tmp.push([score, id])
    } else if (name !== nextName) {
      tmp.push([score, id])
      const res = tmp.sort((a, b) => b[0] - a[0])
      res.forEach(e => {
        console.log(e[1])
      })
      tmp = []
    }
  }
}

ans()
