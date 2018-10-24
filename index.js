'use strict';

const { join } = require('path');

const type = process.env.DEBUG ? 'Debug' : 'Release';
const path = join(__dirname, 'build', type, 'binding.node');

module.exports = require(path);
