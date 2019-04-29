// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `a`

const c = stdin.split('\n')[0]

const res = _ => {
  const v = ['a','i','u','e','o']
  return v.indexOf(c) > -1 ? 'vowel' : 'consonant'
}

console.log(res())