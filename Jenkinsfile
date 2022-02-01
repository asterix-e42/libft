pipeline {
  agent {
    docker {
      image 'ubuntu'
    }

  }
  stages {
    stage('build') {
      steps {
        sh 'echo bonjour'
      }
    }

    stage('ibelive') {
      steps {
        mail(subject: '???', body: 'lk', to: 'tdumoulin@cap3c.net')
      }
    }

  }
}