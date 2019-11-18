module.exports = {
  parser: 'babel-eslint',
  env: {
    browser: true,
    es6: true,
    node: true,
  },
  extends: ['airbnb', 'react-app', 'prettier', 'plugin:prettier/recommended', 'prettier/react'],
  globals: {
    Atomics: 'readonly',
    SharedArrayBuffer: 'readonly',
  },
  parserOptions: {
    ecmaFeatures: {
      jsx: true,
      impliedStrict: true,
    },
    ecmaVersion: 2015,
    sourceType: 'module',
  },
  settings: {
    'import/resolver': {
      webpack: {
        config: './webpack.config.js',
      },
    },
  },
  plugins: ['react', 'react-hooks', 'prettier'],
  rules: {
    'react-hooks/rules-of-hooks': 'error',
    'prettier/prettier': [
      'error',
      {
        singleQuote: true,
        semi: false,
        bracketSpacing: true,
        trailingComma: 'es5',
        arrowParens: 'always',
      },
    ],
    'react/jsx-filename-extension': [
      'warn',
      {
        extensions: ['.js', '.jsx'],
      },
    ],
    'no-duplicate-imports': 'warn',
    'no-restricted-syntax': 'error',
    'linebreak-style': 'error',
    'react/prop-types': 'error',
    'no-unused-vars': 'warn',
    'react/jsx-props-no-spreading': 'warn',
    'no-underscore-dangle': 'error',
    'react/jsx-fragments': ['warn', 'element'],
    'no-nested-ternary': 'warn',
    'no-shadow': [
      'warn',
      {
        hoist: 'never',
        allow: ['done'],
      },
    ],
    'import/no-unresolved': 'error',
    'react/no-array-index-key': 'warn',
    'no-bitwise': 'error',
    'react/prop-types': 'off',
  },
}
