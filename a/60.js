// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `yakiniku unagi sushi`

const [a, b, c] = stdin.split('\n')[0].split(' ')

const al = a.split('').pop()

const bs = b.split('').shift()

const bl = b.split('').pop()

const cs = c.split('').shift()

console.log(al === bs && bl === cs ? 'YES' : 'NO')
