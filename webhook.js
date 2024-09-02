// node script that runs every push to send compiled dll to discord webhook
import fetch from 'node-fetch';

const webhook_url = process.env.WEBHOOK_URL;
const test_var = process.env.TEST_VAR;
console.log('test_var', test_var);