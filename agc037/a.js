// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `aaaa`

const s = stdin.split('\n')[0]

const ans = () => {
  const splited = s.split('')

  let sArr = [splited[0]]

  let prev = ''

  let isSeq = false
  for (let i = 1; i < splited.length; i++) {
    const newS = `${isSeq ? prev : ''}${splited[i]}`

    if (newS === sArr[sArr.length - 1]) {
      prev = newS
      isSeq = true
    } else {
      prev = ''
      isSeq = false
      sArr.push(newS)
    }
  }

  console.log(sArr.length)
}

ans()
